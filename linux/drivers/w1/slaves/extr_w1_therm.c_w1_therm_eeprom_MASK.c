
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct w1_slave {scalar_t__* family_data; struct w1_master* master; } ;
struct w1_master {int bus_mutex; } ;
struct device {int dummy; } ;
typedef int rom ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct w1_slave* FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 unsigned long FUNC_5 (unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct w1_master*,unsigned int) ;
 scalar_t__ FUNC_9 (struct w1_master*) ;
 scalar_t__ FUNC_10 (struct w1_slave*) ;
 int VAR_4 ;
 int FUNC_11 (struct w1_master*,int ) ;

__attribute__((used)) static inline int FUNC_12(struct device *VAR_5)
{
 struct w1_slave *VAR_6 = FUNC_3(VAR_5);
 struct w1_master *VAR_7 = VAR_6->master;
 u8 VAR_8[9], VAR_9;
 int VAR_10, VAR_11 = 10;
 u8 *VAR_12 = VAR_6->family_data;

 if (!VAR_6->family_data) {
  VAR_10 = -VAR_1;
  goto error;
 }


 FUNC_2(FUNC_0(VAR_12));

 VAR_10 = FUNC_6(&VAR_7->bus_mutex);
 if (VAR_10 != 0)
  goto dec_refcnt;

 FUNC_4(VAR_8, 0, sizeof(VAR_8));

 while (VAR_11--) {
  if (!FUNC_10(VAR_6)) {
   unsigned int VAR_13 = 10;
   unsigned long VAR_14;


   FUNC_11(VAR_7, VAR_3);
   VAR_9 = FUNC_9(VAR_7);

   if (FUNC_10(VAR_6))
    continue;


   if (VAR_4 == 2 ||
       (!VAR_9 && VAR_4))
    FUNC_8(VAR_7, VAR_13);

   FUNC_11(VAR_7, VAR_2);

   if (VAR_9) {
    FUNC_7(&VAR_7->bus_mutex);

    VAR_14 = FUNC_5(VAR_13);
    if (VAR_14 != 0) {
     VAR_10 = -VAR_0;
     goto dec_refcnt;
    }

    VAR_10 = FUNC_6(&VAR_7->bus_mutex);
    if (VAR_10 != 0)
     goto dec_refcnt;
   } else if (!VAR_4) {
    VAR_14 = FUNC_5(VAR_13);
    if (VAR_14 != 0) {
     VAR_10 = -VAR_0;
     goto mt_unlock;
    }
   }

   break;
  }
 }

mt_unlock:
 FUNC_7(&VAR_7->bus_mutex);
dec_refcnt:
 FUNC_1(FUNC_0(VAR_12));
error:
 return VAR_10;
}
