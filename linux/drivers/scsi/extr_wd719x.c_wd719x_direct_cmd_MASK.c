
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wd719x {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct wd719x*,int) ;
 scalar_t__ FUNC_1 (struct wd719x*) ;
 int FUNC_2 (struct wd719x*,int ,int ) ;
 int FUNC_3 (struct wd719x*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct wd719x *VAR_14, u8 VAR_15, u8 VAR_16, u8 VAR_17,
        u8 VAR_18, dma_addr_t VAR_19, int VAR_20)
{
 int VAR_21 = 0;


 FUNC_2(VAR_14, VAR_5, VAR_13);


 if (FUNC_1(VAR_14))
  return -VAR_0;


 if (VAR_15 != VAR_9 && VAR_15 != VAR_7 &&
     VAR_15 != VAR_8 && VAR_15 != VAR_11)
  VAR_16 |= VAR_12;
 FUNC_2(VAR_14, VAR_1, VAR_16);
 FUNC_2(VAR_14, VAR_2, VAR_17);
 FUNC_2(VAR_14, VAR_3, VAR_18);
 if (VAR_19)
  FUNC_3(VAR_14, VAR_6, VAR_19);


 FUNC_2(VAR_14, VAR_5, VAR_13);


 FUNC_2(VAR_14, VAR_4, VAR_15);

 if (VAR_20)
  VAR_21 = FUNC_0(VAR_14, VAR_20);


 if (VAR_15 != VAR_10)
  FUNC_2(VAR_14, VAR_5, VAR_13);

 return VAR_21;
}
