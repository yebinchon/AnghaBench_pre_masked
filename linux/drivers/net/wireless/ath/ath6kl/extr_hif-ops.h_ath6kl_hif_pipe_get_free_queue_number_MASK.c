
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {int (* pipe_get_free_queue_number ) (struct ath6kl*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ath6kl*,int ) ;

__attribute__((used)) static inline u16 FUNC_2(struct ath6kl *VAR_1,
       u8 VAR_2)
{
 FUNC_0(VAR_0, "hif pipe get free queue number\n");

 return VAR_1->hif_ops->pipe_get_free_queue_number(VAR_1, VAR_2);
}
