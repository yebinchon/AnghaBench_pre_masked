
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_hcb {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ,int) ;
 int FUNC_2 (struct sym_hcb*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,char*,int,unsigned int,unsigned int) ;
 char* FUNC_4 (struct sym_hcb*) ;
 int VAR_9 ;
 int FUNC_5 (int) ;

__attribute__((used)) static unsigned FUNC_6 (struct sym_hcb *VAR_10, int VAR_11)
{
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;
 FUNC_2(VAR_10, VAR_6, 0);
 FUNC_0(VAR_10, VAR_7);
 FUNC_1(VAR_10, VAR_3, 0);
 FUNC_0(VAR_10, VAR_7);





 if (VAR_10->features & VAR_0) {
  FUNC_2(VAR_10, VAR_6, VAR_1);
  FUNC_1(VAR_10, VAR_4, VAR_2);
 }
 FUNC_1(VAR_10, VAR_5, 4);
 FUNC_1(VAR_10, VAR_8, 0);
 FUNC_1(VAR_10, VAR_8, VAR_11);
 while (!(FUNC_0(VAR_10, VAR_7) & VAR_1) && VAR_12++ < 100000)
  FUNC_5(1000/4);
 FUNC_1(VAR_10, VAR_8, 0);



 if (VAR_10->features & VAR_0) {
  FUNC_2(VAR_10, VAR_6, 0);
  FUNC_1(VAR_10, VAR_4, 0);
 }





  FUNC_1(VAR_10, VAR_5, 0);




 VAR_13 = VAR_12 ? ((1 << VAR_11) * (4340*4)) / VAR_12 : 0;





 if (VAR_10->features & VAR_0)
  VAR_13 = (VAR_13 * 2) / 3;

 if (VAR_9 >= 2)
  FUNC_3 ("%s: Delay (GEN=%d): %u msec, %u KHz\n",
   FUNC_4(VAR_10), VAR_11, VAR_12/4, VAR_13);

 return VAR_13;
}
