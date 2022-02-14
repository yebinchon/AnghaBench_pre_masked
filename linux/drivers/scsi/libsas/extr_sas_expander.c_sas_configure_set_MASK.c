
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct domain_device {int* sas_addr; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_1 (int ) ;
 int* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int*,int ) ;
 int FUNC_6 (char*,scalar_t__,int,int) ;
 int FUNC_7 (struct domain_device*,int*,int ,int*,int ) ;

__attribute__((used)) static int FUNC_8(struct domain_device *VAR_6, int VAR_7,
        u8 *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 u8 *VAR_12;
 u8 *VAR_13;

 VAR_12 = FUNC_1(VAR_0);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_2(VAR_1);
 if (!VAR_13) {
  FUNC_4(VAR_12);
  return -VAR_2;
 }

 VAR_12[1] = VAR_4;
 *(__be16 *)(VAR_12+6) = FUNC_3(VAR_9);
 VAR_12[9] = VAR_7;
 if (FUNC_0(VAR_8) == 0 || !VAR_10)
  VAR_12[12] |= 0x80;
 FUNC_5(VAR_12+16, VAR_8, VAR_3);

 VAR_11 = FUNC_7(VAR_6, VAR_12, VAR_0, VAR_13,
          VAR_1);
 if (VAR_11)
  goto out;
 VAR_11 = VAR_13[2];
 if (VAR_11 == VAR_5) {
  FUNC_6("overflow of indexes: dev %016llx phy%02d index 0x%x\n",
   FUNC_0(VAR_6->sas_addr), VAR_7, VAR_9);
 }
out:
 FUNC_4(VAR_12);
 FUNC_4(VAR_13);
 return VAR_11;
}
