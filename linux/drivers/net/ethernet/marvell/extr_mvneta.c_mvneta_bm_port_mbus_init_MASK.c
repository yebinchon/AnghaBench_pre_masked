
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mvneta_port {int bm_win_id; int dev; TYPE_1__* bm_priv; } ;
struct TYPE_2__ {int bppi_phys_addr; } ;


 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (struct mvneta_port*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct mvneta_port *VAR_0)
{
 u32 VAR_1;
 u8 VAR_2, VAR_3;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_0->bm_priv->bppi_phys_addr, &VAR_1,
      &VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_0->bm_win_id = -1;


 VAR_4 = FUNC_1(VAR_0, VAR_0->bm_priv->bppi_phys_addr, VAR_1,
         VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_0->dev, "fail to configure mbus window to BM\n");
  return VAR_4;
 }
 return 0;
}
