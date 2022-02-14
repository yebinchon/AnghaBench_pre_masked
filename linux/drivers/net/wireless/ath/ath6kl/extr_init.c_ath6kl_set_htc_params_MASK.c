
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int block_size; } ;
struct ath6kl {TYPE_1__ mbox_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath6kl*,int ,int) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ath6kl*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct ath6kl *VAR_3, u32 VAR_4,
     u8 VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 VAR_7 = VAR_3->mbox_info.block_size;

 if (VAR_5)
  VAR_7 |= ((u32)VAR_5) << 16;


 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_7);
 if (VAR_6) {
  FUNC_3("bmi_write_memory for IO block size failed\n");
  goto out;
 }

 FUNC_2(VAR_0, "block size set: %d (target addr:0x%X)\n",
     VAR_7,
     FUNC_4(VAR_3, FUNC_0(VAR_1)));

 if (VAR_4) {

  VAR_6 = FUNC_1(VAR_3, VAR_2,
            VAR_4);
  if (VAR_6) {
   FUNC_3("bmi_write_memory for yield limit failed\n");
   goto out;
  }
 }

out:
 return VAR_6;
}
