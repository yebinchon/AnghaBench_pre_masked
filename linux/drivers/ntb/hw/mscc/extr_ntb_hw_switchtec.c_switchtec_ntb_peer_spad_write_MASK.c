
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
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 struct switchtec_ntb* FUNC_2 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_3(struct ntb_dev *VAR_3, int VAR_4,
      int VAR_5, u32 VAR_6)
{
 struct switchtec_ntb *VAR_7 = FUNC_2(VAR_3);

 if (VAR_4 != VAR_2)
  return -VAR_0;

 if (VAR_5 < 0 || VAR_5 >= FUNC_0(VAR_7->peer_shared->spad))
  return -VAR_0;

 if (!VAR_7->peer_shared)
  return -VAR_1;

 FUNC_1(VAR_6, &VAR_7->peer_shared->spad[VAR_5]);

 return 0;
}
