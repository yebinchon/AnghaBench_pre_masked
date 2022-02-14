
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switchtec_ntb {TYPE_1__* peer_shared; } ;
struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int * spad; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct switchtec_ntb* FUNC_2 (struct ntb_dev*) ;

__attribute__((used)) static u32 FUNC_3(struct ntb_dev *VAR_2, int VAR_3,
     int VAR_4)
{
 struct switchtec_ntb *VAR_5 = FUNC_2(VAR_2);

 if (VAR_3 != VAR_1)
  return -VAR_0;

 if (VAR_4 < 0 || VAR_4 >= FUNC_0(VAR_5->peer_shared->spad))
  return 0;

 if (!VAR_5->peer_shared)
  return 0;

 return FUNC_1(&VAR_5->peer_shared->spad[VAR_4]);
}
