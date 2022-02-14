
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pids; int address; int control; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(unsigned VAR_6, unsigned VAR_7,
    const char *VAR_8, int VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12, VAR_13;

 if (VAR_9 > VAR_2)
  return -1;

 VAR_11 = FUNC_0(VAR_6, VAR_7);

 VAR_12 = FUNC_5(&VAR_5->pids);
 VAR_12 = FUNC_2(VAR_12, VAR_4);

 VAR_13 = FUNC_5(&VAR_5->control);
 VAR_13 = FUNC_1(VAR_13, VAR_9);
 VAR_13 |= VAR_3;
 VAR_13 |= VAR_0;

 FUNC_3(VAR_8, VAR_9);
 FUNC_6(VAR_11, &VAR_5->address);
 FUNC_6(VAR_12, &VAR_5->pids);
 VAR_10 = FUNC_4(VAR_13, VAR_1);

 return VAR_10;
}
