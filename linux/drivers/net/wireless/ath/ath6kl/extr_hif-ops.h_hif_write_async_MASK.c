
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct htc_packet {int dummy; } ;
struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {int (* write_async ) (struct ath6kl*,int ,int *,int ,int ,struct htc_packet*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int *,int ,int ) ;
 int FUNC_1 (struct ath6kl*,int ,int *,int ,int ,struct htc_packet*) ;

__attribute__((used)) static inline int FUNC_2(struct ath6kl *VAR_1, u32 VAR_2, u8 *VAR_3,
      u32 VAR_4, u32 VAR_5,
      struct htc_packet *VAR_6)
{
 FUNC_0(VAR_0,
     "hif write async addr 0x%x buf 0x%p len %d request 0x%x\n",
     VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_1->hif_ops->write_async(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6);
}
