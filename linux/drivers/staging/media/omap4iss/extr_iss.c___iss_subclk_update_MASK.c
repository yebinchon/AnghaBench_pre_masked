
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_device {int subclk_resources; } ;


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
 int FUNC_0 (struct iss_device*,int ,int ) ;
 int FUNC_1 (struct iss_device*,int ,int ,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct iss_device *VAR_11)
{
 u32 VAR_12 = 0;
 int VAR_13 = 0, VAR_14 = 1000;

 if (VAR_11->subclk_resources & VAR_8)
  VAR_12 |= VAR_2;

 if (VAR_11->subclk_resources & VAR_9)
  VAR_12 |= VAR_3;

 if (VAR_11->subclk_resources & VAR_10)
  VAR_12 |= VAR_4;

 FUNC_1(VAR_11, VAR_7, VAR_1,
         VAR_5, VAR_12);


 while (--VAR_14 > 0) {
  FUNC_2(1);
  if ((FUNC_0(VAR_11, VAR_7, VAR_6) &
      VAR_5) == VAR_12)
   break;
 }

 if (!VAR_14)
  VAR_13 = -VAR_0;

 return VAR_13;
}
