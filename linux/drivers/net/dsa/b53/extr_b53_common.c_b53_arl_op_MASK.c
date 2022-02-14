
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct b53_device {int dummy; } ;
struct b53_arl_entry {int port; int is_valid; int is_static; int mac; int vid; } ;
typedef int ent ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__*,struct b53_arl_entry*) ;
 int FUNC_3 (struct b53_device*,int ,int ,struct b53_arl_entry*,int*,int) ;
 int FUNC_4 (struct b53_device*,int) ;
 int FUNC_5 (struct b53_device*,int ,int ,int ) ;
 int FUNC_6 (struct b53_device*,int ,int ,scalar_t__) ;
 int FUNC_7 (struct b53_device*,int ,int ,int ) ;
 int FUNC_8 (struct b53_device*,int ,int ,int ) ;
 int FUNC_9 (unsigned char const*) ;
 int FUNC_10 (int ,unsigned char const*,int ) ;
 int FUNC_11 (struct b53_arl_entry*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct b53_device *VAR_4, int VAR_5, int VAR_6,
        const unsigned char *VAR_7, u16 VAR_8, bool VAR_9)
{
 struct b53_arl_entry VAR_10;
 u32 VAR_11;
 u64 VAR_12, VAR_13 = 0;
 u8 VAR_14 = 0;
 int VAR_15;


 VAR_12 = FUNC_9(VAR_7);


 FUNC_7(VAR_4, VAR_0, VAR_1, VAR_12);
 FUNC_5(VAR_4, VAR_0, VAR_2, VAR_8);


 VAR_15 = FUNC_4(VAR_4, 1);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_3(VAR_4, VAR_12, VAR_8, &VAR_10, &VAR_14, VAR_9);

 if (VAR_5)
  return VAR_15;


 if (VAR_15) {
  VAR_11 = 0;
  VAR_14 = 1;
 }

 FUNC_11(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.port = VAR_6;
 VAR_10.is_valid = VAR_9;
 VAR_10.vid = VAR_8;
 VAR_10.is_static = 1;
 FUNC_10(VAR_10.mac, VAR_7, VAR_3);
 FUNC_2(&VAR_13, &VAR_11, &VAR_10);

 FUNC_8(VAR_4, VAR_0,
      FUNC_1(VAR_14), VAR_13);
 FUNC_6(VAR_4, VAR_0,
      FUNC_0(VAR_14), VAR_11);

 return FUNC_4(VAR_4, 0);
}
