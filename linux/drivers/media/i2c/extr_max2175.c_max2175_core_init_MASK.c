
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max2175 {scalar_t__ xtal_freq; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct max2175*) ;
 int FUNC_1 (struct max2175*) ;
 int FUNC_2 (struct max2175*) ;
 int FUNC_3 (struct max2175*) ;
 int FUNC_4 (struct max2175*) ;
 int FUNC_5 (struct max2175*) ;
 int FUNC_6 (struct max2175*,int ,int ,int ) ;
 int FUNC_7 (struct max2175*,int,int,int) ;
 int FUNC_8 (struct max2175*,int,int,int,int ) ;
 int FUNC_9 (struct max2175*,char*,...) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct max2175 *VAR_7, u32 VAR_8)
{
 int VAR_9;


 if (VAR_7->xtal_freq == VAR_2)
  FUNC_3(VAR_7);
 else
  FUNC_4(VAR_7);


 if (!VAR_7->master)
  FUNC_7(VAR_7, 30, 7, 1);

 FUNC_9(VAR_7, "refout_bits %u\n", VAR_8);


 FUNC_8(VAR_7, 56, 7, 5, VAR_8);


 FUNC_7(VAR_7, 99, 1, 0);
 FUNC_10(1000, 1500);
 FUNC_7(VAR_7, 99, 1, 1);


 FUNC_1(VAR_7);


 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  return VAR_9;


 FUNC_2(VAR_7);

 if (VAR_7->xtal_freq == VAR_2) {

  FUNC_6(VAR_7, VAR_0, 0,
       VAR_3);
  FUNC_6(VAR_7, VAR_1, 0,
       VAR_5);
 } else {

  FUNC_6(VAR_7, VAR_0, 0,
       VAR_4);
  FUNC_6(VAR_7, VAR_1, 0,
       VAR_6);
 }
 FUNC_9(VAR_7, "core initialized\n");

 return 0;
}
