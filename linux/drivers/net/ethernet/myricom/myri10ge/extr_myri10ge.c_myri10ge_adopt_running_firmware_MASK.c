
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myri10ge_priv {size_t sram_size; int fw_ver_major; int fw_ver_minor; int fw_ver_tiny; int adopted_rx_filter_bug; scalar_t__ sram; TYPE_1__* pdev; } ;
struct mcp_gen_header {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int,int,int) ;
 int FUNC_2 (struct mcp_gen_header*) ;
 struct mcp_gen_header* FUNC_3 (size_t const,int ) ;
 int FUNC_4 (struct mcp_gen_header*,scalar_t__,size_t const) ;
 int FUNC_5 (struct myri10ge_priv*,struct mcp_gen_header*) ;
 int FUNC_6 (scalar_t__) ;
 size_t FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct myri10ge_priv *VAR_4)
{
 struct mcp_gen_header *VAR_5;
 struct device *VAR_6 = &VAR_4->pdev->dev;
 const size_t VAR_7 = sizeof(struct mcp_gen_header);
 size_t VAR_8;
 int VAR_9;


 VAR_8 = FUNC_7(FUNC_6(VAR_4->sram + VAR_3));

 if ((VAR_8 & 3) || VAR_8 + sizeof(*VAR_5) > VAR_4->sram_size) {
  FUNC_0(VAR_6, "Running firmware has bad header offset (%d)\n",
   (int)VAR_8);
  return -VAR_0;
 }



 VAR_5 = FUNC_3(VAR_7, VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 FUNC_4(VAR_5, VAR_4->sram + VAR_8, VAR_7);
 VAR_9 = FUNC_5(VAR_4, VAR_5);
 FUNC_2(VAR_5);




 if (VAR_4->fw_ver_major == 1 && VAR_4->fw_ver_minor == 4 &&
     VAR_4->fw_ver_tiny >= 4 && VAR_4->fw_ver_tiny <= 11) {
  VAR_4->adopted_rx_filter_bug = 1;
  FUNC_1(VAR_6, "Adopting fw %d.%d.%d: "
    "working around rx filter bug\n",
    VAR_4->fw_ver_major, VAR_4->fw_ver_minor,
    VAR_4->fw_ver_tiny);
 }
 return VAR_9;
}
