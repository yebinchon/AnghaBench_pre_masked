
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct w1_slave {int* family_data; struct w1_master* master; } ;
struct w1_master {int bus_mutex; } ;
struct device {int dummy; } ;
typedef int rom ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct w1_slave* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (struct w1_master*,int*,int) ;
 int FUNC_11 (struct w1_slave*) ;
 int FUNC_12 (struct w1_master*,int) ;

__attribute__((used)) static inline int FUNC_13(struct device *VAR_4, int VAR_5)
{
 struct w1_slave *VAR_6 = FUNC_3(VAR_4);
 struct w1_master *VAR_7 = VAR_6->master;
 u8 VAR_8[9], VAR_9;
 int VAR_10, VAR_11 = 10;
 u8 *VAR_12 = VAR_6->family_data;
 uint8_t VAR_13;
 uint8_t VAR_14 = 0x60;

 if (VAR_5 > 12 || VAR_5 < 9) {
  FUNC_8("Unsupported precision\n");
  VAR_10 = -VAR_0;
  goto error;
 }

 if (!VAR_6->family_data) {
  VAR_10 = -VAR_1;
  goto error;
 }


 FUNC_2(FUNC_0(VAR_12));

 VAR_10 = FUNC_6(&VAR_7->bus_mutex);
 if (VAR_10 != 0)
  goto dec_refcnt;

 FUNC_5(VAR_8, 0, sizeof(VAR_8));


 switch (VAR_5) {
 case 9:
  VAR_13 = 0x00;
  break;
 case 10:
  VAR_13 = 0x20;
  break;
 case 11:
  VAR_13 = 0x40;
  break;
 case 12:
 default:
  VAR_13 = 0x60;
  break;
 }

 while (VAR_11--) {
  VAR_9 = 0;

  if (!FUNC_11(VAR_6)) {
   int VAR_15 = 0;


   FUNC_12(VAR_7, VAR_2);
   VAR_15 = FUNC_10(VAR_7, VAR_8, 9);
   if (VAR_15 != 9)
    FUNC_4(VAR_4, "w1_read_block() returned %u instead of 9.\n", VAR_15);

   VAR_9 = FUNC_9(VAR_8, 8);
   if (VAR_8[8] == VAR_9) {
    VAR_8[4] = (VAR_8[4] & ~VAR_14) | (VAR_13 & VAR_14);

    if (!FUNC_11(VAR_6)) {
     FUNC_12(VAR_7, VAR_3);
     FUNC_12(VAR_7, VAR_8[2]);
     FUNC_12(VAR_7, VAR_8[3]);
     FUNC_12(VAR_7, VAR_8[4]);

     break;
    }
   }
  }
 }

 FUNC_7(&VAR_7->bus_mutex);
dec_refcnt:
 FUNC_1(FUNC_0(VAR_12));
error:
 return VAR_10;
}
