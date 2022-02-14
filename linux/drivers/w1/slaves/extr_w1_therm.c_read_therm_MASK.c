
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct w1_slave {scalar_t__* family_data; struct w1_master* master; } ;
struct w1_master {int bus_mutex; } ;
struct therm_info {scalar_t__* rom; int verdict; scalar_t__ crc; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 unsigned long FUNC_5 (unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 (struct w1_master*,unsigned int) ;
 scalar_t__ FUNC_10 (struct w1_master*) ;
 int FUNC_11 (struct w1_master*,scalar_t__*,int) ;
 scalar_t__ FUNC_12 (struct w1_slave*) ;
 int VAR_5 ;
 int FUNC_13 (struct w1_master*,int ) ;

__attribute__((used)) static ssize_t FUNC_14(struct device *VAR_6,
     struct w1_slave *VAR_7, struct therm_info *VAR_8)
{
 struct w1_master *VAR_9 = VAR_7->master;
 u8 VAR_10;
 int VAR_11, VAR_12 = 10;
 u8 *VAR_13 = VAR_7->family_data;

 if (!VAR_13) {
  VAR_11 = -VAR_1;
  goto error;
 }


 FUNC_2(FUNC_0(VAR_13));

 VAR_11 = FUNC_6(&VAR_9->bus_mutex);
 if (VAR_11 != 0)
  goto dec_refcnt;

 FUNC_4(VAR_8->rom, 0, sizeof(VAR_8->rom));

 while (VAR_12--) {

  VAR_8->verdict = 0;
  VAR_8->crc = 0;

  if (!FUNC_12(VAR_7)) {
   int VAR_14 = 0;
   unsigned int VAR_15 = 750;
   unsigned long VAR_16;

   FUNC_13(VAR_9, VAR_3);
   VAR_10 = FUNC_10(VAR_9);

   if (FUNC_12(VAR_7))
    continue;


   if (VAR_5 == 2 ||
     (!VAR_10 && VAR_5))
    FUNC_9(VAR_9, VAR_15);

   FUNC_13(VAR_9, VAR_2);

   if (VAR_10) {
    FUNC_7(&VAR_9->bus_mutex);

    VAR_16 = FUNC_5(VAR_15);
    if (VAR_16 != 0) {
     VAR_11 = -VAR_0;
     goto dec_refcnt;
    }

    VAR_11 = FUNC_6(&VAR_9->bus_mutex);
    if (VAR_11 != 0)
     goto dec_refcnt;
   } else if (!VAR_5) {
    VAR_16 = FUNC_5(VAR_15);
    if (VAR_16 != 0) {
     VAR_11 = -VAR_0;
     goto mt_unlock;
    }
   }

   if (!FUNC_12(VAR_7)) {

    FUNC_13(VAR_9, VAR_4);
    VAR_14 = FUNC_11(VAR_9, VAR_8->rom, 9);
    if (VAR_14 != 9) {
     FUNC_3(VAR_6, "w1_read_block() "
      "returned %u instead of 9.\n",
      VAR_14);
    }

    VAR_8->crc = FUNC_8(VAR_8->rom, 8);

    if (VAR_8->rom[8] == VAR_8->crc)
     VAR_8->verdict = 1;
   }
  }

  if (VAR_8->verdict)
   break;
 }

mt_unlock:
 FUNC_7(&VAR_9->bus_mutex);
dec_refcnt:
 FUNC_1(FUNC_0(VAR_13));
error:
 return VAR_11;
}
