
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_drif_sdr {int dummy; } ;
struct rcar_drif {int num; scalar_t__ base; struct rcar_drif_sdr* sdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rcar_drif*) ;
 int FUNC_1 (struct rcar_drif*,scalar_t__) ;
 int FUNC_2 (struct rcar_drif*,scalar_t__,int) ;
 int FUNC_3 (struct rcar_drif_sdr*,char*,int ,int ) ;
 int FUNC_4 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct rcar_drif *VAR_9)
{
 struct rcar_drif_sdr *VAR_10 = VAR_9->sdr;
 u32 VAR_11, VAR_12;
 int VAR_13;


 FUNC_2(VAR_9, VAR_5, VAR_6);
 VAR_13 = FUNC_4(VAR_9->base + VAR_5, VAR_11,
     !(VAR_11 & VAR_6), 7, 100000);
 if (VAR_13) {
  FUNC_3(VAR_10, "ch%u: failed to reset rx. ctr 0x%08x\n",
     VAR_9->num, FUNC_1(VAR_9, VAR_5));
  return VAR_13;
 }


 VAR_13 = FUNC_0(VAR_9);
 if (VAR_13)
  return VAR_13;


 VAR_12 = VAR_1 | VAR_0 | VAR_3 |
  VAR_4 | VAR_2;
 FUNC_2(VAR_9, VAR_8, VAR_12);


 FUNC_2(VAR_9, VAR_7, 0x00009000);

 return VAR_13;
}
