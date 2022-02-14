
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {int (* read_write_sync ) (struct ath6kl*,int,int *,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,int,int *,int,int) ;
 int FUNC_1 (struct ath6kl*,int,int *,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct ath6kl *VAR_2, u32 VAR_3, u8 *VAR_4,
          u32 VAR_5, u32 VAR_6)
{
 FUNC_0(VAR_0,
     "hif %s sync addr 0x%x buf 0x%p len %d request 0x%x\n",
     (VAR_6 & VAR_1) ? "write" : "read",
     VAR_3, VAR_4, VAR_5, VAR_6);

 return VAR_2->hif_ops->read_write_sync(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
