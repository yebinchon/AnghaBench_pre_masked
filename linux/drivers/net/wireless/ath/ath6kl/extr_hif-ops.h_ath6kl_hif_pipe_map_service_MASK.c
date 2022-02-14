
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {int (* pipe_map_service ) (struct ath6kl*,int ,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ath6kl*,int ,int *,int *) ;

__attribute__((used)) static inline int FUNC_2(struct ath6kl *VAR_1,
           u16 VAR_2, u8 *VAR_3,
           u8 *VAR_4)
{
 FUNC_0(VAR_0, "hif pipe get default\n");

 return VAR_1->hif_ops->pipe_map_service(VAR_1, VAR_2, VAR_3, VAR_4);
}
