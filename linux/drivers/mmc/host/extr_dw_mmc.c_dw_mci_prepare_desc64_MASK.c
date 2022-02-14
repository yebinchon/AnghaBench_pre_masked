
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mmc_data {int * sg; } ;
struct idmac_desc_64addr {int des0; int des4; int des5; } ;
struct dw_mci {struct idmac_desc_64addr* sg_cpu; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct idmac_desc_64addr*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dw_mci*) ;
 int FUNC_3 (struct idmac_desc_64addr*,int ,int ) ;
 scalar_t__ FUNC_4 (int*,int,int,int,int) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;

__attribute__((used)) static inline int FUNC_7(struct dw_mci *VAR_9,
      struct mmc_data *VAR_10,
      unsigned int VAR_11)
{
 unsigned int VAR_12;
 struct idmac_desc_64addr *VAR_13, *VAR_14, *VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_13 = VAR_14 = VAR_15 = VAR_9->sg_cpu;

 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
  unsigned int VAR_18 = FUNC_6(&VAR_10->sg[VAR_17]);

  u64 VAR_19 = FUNC_5(&VAR_10->sg[VAR_17]);

  for ( ; VAR_18 ; VAR_15++) {
   VAR_12 = (VAR_18 <= VAR_1) ?
       VAR_18 : VAR_1;

   VAR_18 -= VAR_12;







   if (FUNC_4(&VAR_15->des0, VAR_16,
      !(VAR_16 & VAR_7),
      10, 100 * VAR_8))
    goto err_own_bit;





   VAR_15->des0 = VAR_7 | VAR_4 |
      VAR_3;


   FUNC_0(VAR_15, VAR_12);


   VAR_15->des4 = VAR_19 & 0xffffffff;
   VAR_15->des5 = VAR_19 >> 32;


   VAR_19 += VAR_12;


   VAR_14 = VAR_15;
  }
 }


 VAR_13->des0 |= VAR_5;


 VAR_14->des0 &= ~(VAR_3 | VAR_4);
 VAR_14->des0 |= VAR_6;

 return 0;
err_own_bit:

 FUNC_1(VAR_9->dev, "descriptor is still owned by IDMAC.\n");
 FUNC_3(VAR_9->sg_cpu, 0, VAR_0);
 FUNC_2(VAR_9);
 return -VAR_2;
}
