
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ks_wlan_private {int dummy; } ;
struct firmware {unsigned int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct ks_wlan_private*,int ,int *,unsigned int) ;
 int FUNC_3 (struct ks_wlan_private*,scalar_t__) ;
 int FUNC_4 (struct ks_wlan_private*,int ,int *,unsigned int) ;
 int FUNC_5 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_6 (int *,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct ks_wlan_private *VAR_7,
    const struct firmware *VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;
 u8 *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(VAR_6, VAR_4);
 if (!VAR_13)
  return -VAR_1;

 VAR_9 = VAR_8->size;

 do {
  if (VAR_9 >= VAR_6) {
   VAR_10 = VAR_6;
   VAR_9 = VAR_9 - VAR_6;
  } else {
   VAR_10 = VAR_9;
   VAR_9 = 0;
  }
  if (VAR_10 == 0)
   break;

  FUNC_6(VAR_13, VAR_8->data + VAR_12, VAR_10);

  VAR_11 = VAR_12;
  VAR_14 = FUNC_3(VAR_7,
            VAR_5 + VAR_11);
  if (VAR_14)
   goto free_rom_buf;

  VAR_14 = FUNC_4(VAR_7, VAR_0, VAR_13, VAR_10);
  if (VAR_14)
   goto free_rom_buf;

  VAR_14 = FUNC_2(VAR_7,
            VAR_0, VAR_13, VAR_10);
  if (VAR_14)
   goto free_rom_buf;

  VAR_12 += VAR_10;

 } while (VAR_10);

 VAR_14 = FUNC_5(VAR_7, VAR_2, VAR_3);

free_rom_buf:
 FUNC_0(VAR_13);
 return VAR_14;
}
