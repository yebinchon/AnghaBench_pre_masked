
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct b53_device {unsigned int num_arl_entries; } ;
struct b53_arl_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (struct b53_device*) ;
 int FUNC_3 (struct b53_arl_entry*,int,int) ;
 int FUNC_4 (struct b53_device*,int ,int ,int*) ;
 int FUNC_5 (struct b53_device*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct b53_device *VAR_4, u64 VAR_5,
   u16 VAR_6, struct b53_arl_entry *VAR_7, u8 *VAR_8,
   bool VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_4);
 if (VAR_11)
  return VAR_11;


 for (VAR_10 = 0; VAR_10 < VAR_4->num_arl_entries; VAR_10++) {
  u64 VAR_12;
  u32 VAR_13;

  FUNC_5(VAR_4, VAR_2,
      FUNC_1(VAR_10), &VAR_12);
  FUNC_4(VAR_4, VAR_2,
      FUNC_0(VAR_10), &VAR_13);
  FUNC_3(VAR_7, VAR_12, VAR_13);

  if (!(VAR_13 & VAR_1))
   continue;
  if ((VAR_12 & VAR_0) != VAR_5)
   continue;
  *VAR_8 = VAR_10;
 }

 return -VAR_3;
}
