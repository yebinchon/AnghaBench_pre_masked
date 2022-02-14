
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int chanl_space; } ;
struct TYPE_4__ {TYPE_1__ region; } ;
struct fmdev {TYPE_2__ rx; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fmdev*,int ,int ,int*,int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct fmdev *VAR_6, u32 VAR_7)
{
 u16 VAR_8;
 int VAR_9;

 if (VAR_7 > 0 && VAR_7 <= 50000)
  VAR_7 = VAR_3;
 else if (VAR_7 > 50000 && VAR_7 <= 100000)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;


 VAR_8 = VAR_7;
 VAR_9 = FUNC_0(VAR_6, VAR_0, VAR_5, &VAR_8,
   sizeof(VAR_8), ((void*)0), ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_6->rx.region.chanl_space = VAR_7 * VAR_4;

 return VAR_9;
}
