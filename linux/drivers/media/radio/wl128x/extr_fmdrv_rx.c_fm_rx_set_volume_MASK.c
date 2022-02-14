
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int volume; } ;
struct fmdev {scalar_t__ curr_fmmode; TYPE_1__ rx; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fmdev*,int ,int ,int *,int,int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;

int FUNC_2(struct fmdev *VAR_8, u16 VAR_9)
{
 u16 VAR_10;
 int VAR_11;

 if (VAR_8->curr_fmmode != VAR_2)
  return -VAR_1;

 if (VAR_9 > VAR_4) {
  FUNC_1("Volume is not within(%d-%d) range\n",
      VAR_5, VAR_4);
  return -VAR_0;
 }
 VAR_9 *= VAR_3;

 VAR_10 = VAR_9;
 VAR_11 = FUNC_0(VAR_8, VAR_7, VAR_6, &VAR_10,
   sizeof(VAR_10), ((void*)0), ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8->rx.volume = VAR_9;
 return VAR_11;
}
