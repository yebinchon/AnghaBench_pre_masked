
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_standard {unsigned int index; } ;
struct TYPE_2__ {int std; char* descr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct v4l2_standard*,int,char const*) ;

int FUNC_1(struct v4l2_standard *VAR_6, v4l2_std_id VAR_7)
{
 v4l2_std_id VAR_8 = 0;
 unsigned int VAR_9 = VAR_6->index, VAR_10, VAR_11 = 0;
 const char *VAR_12 = "";



 if (VAR_7 == 0)
  return -VAR_1;


 for (VAR_10 = 0; VAR_10 <= VAR_9 && VAR_7; VAR_10++) {


  while ((VAR_7 & VAR_5[VAR_11].std) != VAR_5[VAR_11].std)
   VAR_11++;
  VAR_8 = VAR_5[VAR_11].std;
  VAR_12 = VAR_5[VAR_11].descr;
  VAR_11++;
  if (VAR_8 == 0)
   break;
  if (VAR_8 != VAR_3 &&
    VAR_8 != VAR_4 &&
    VAR_8 != VAR_2)
   VAR_7 &= ~VAR_8;
 }
 if (VAR_10 <= VAR_9)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_8, VAR_12);
 return 0;
}
