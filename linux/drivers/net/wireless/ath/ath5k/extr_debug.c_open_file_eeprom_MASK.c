
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct inode {struct ath5k_hw* i_private; } ;
struct file {void* private_data; } ;
struct eeprom_private {int* buf; int len; } ;
struct ath5k_hw {int dummy; } ;


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
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ath5k_hw*,int,int*) ;
 struct eeprom_private* FUNC_2 (int,int ) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_11, struct file *VAR_12)
{
 struct eeprom_private *VAR_13;
 struct ath5k_hw *VAR_14 = VAR_11->i_private;
 bool VAR_15;
 int VAR_16, VAR_17;
 u32 VAR_18;
 u16 VAR_19, *VAR_20;



 VAR_15 = FUNC_1(VAR_14, VAR_4, &VAR_19);
 if (!VAR_15)
  return -VAR_6;

 if (VAR_19 == 0) {
  VAR_18 = VAR_1 + VAR_0;
 } else {
  VAR_18 = (VAR_19 & VAR_5) <<
   VAR_2;
  FUNC_1(VAR_14, VAR_3, &VAR_19);
  VAR_18 = VAR_18 | VAR_19;
 }

 if (VAR_18 > 4096)
  return -VAR_7;



 VAR_20 = FUNC_4(FUNC_0(VAR_18, 2));
 if (!VAR_20) {
  VAR_17 = -VAR_9;
  goto err;
 }

 for (VAR_16 = 0; VAR_16 < VAR_18; ++VAR_16) {
  if (!FUNC_1(VAR_14, VAR_16, &VAR_19)) {
   VAR_17 = -VAR_8;
   goto freebuf;
  }
  VAR_20[VAR_16] = VAR_19;
 }



 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_10);
 if (!VAR_13) {
  VAR_17 = -VAR_9;
  goto freebuf;
 }

 VAR_13->buf = VAR_20;
 VAR_13->len = VAR_18 * 2;

 VAR_12->private_data = (void *)VAR_13;

 return 0;

freebuf:
 FUNC_3(VAR_20);
err:
 return VAR_17;

}
