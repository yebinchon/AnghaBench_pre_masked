
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {int num_arl_entries; } ;
struct b53_arl_entry {int is_valid; } ;
typedef int dsa_fdb_dump_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b53_device*,int,struct b53_arl_entry*) ;
 int FUNC_1 (struct b53_device*) ;
 int FUNC_2 (int,struct b53_arl_entry*,int *,void*) ;
 int FUNC_3 (struct b53_device*,int ,int ,int ) ;

int FUNC_4(struct dsa_switch *VAR_3, int VAR_4,
   dsa_fdb_dump_cb_t *VAR_5, void *VAR_6)
{
 struct b53_device *VAR_7 = VAR_3->priv;
 struct b53_arl_entry VAR_8[2];
 unsigned int VAR_9 = 0;
 int VAR_10;
 u8 VAR_11;


 VAR_11 = VAR_0;
 FUNC_3(VAR_7, VAR_1, VAR_2, VAR_11);

 do {
  VAR_10 = FUNC_1(VAR_7);
  if (VAR_10)
   return VAR_10;

  FUNC_0(VAR_7, 0, &VAR_8[0]);
  VAR_10 = FUNC_2(VAR_4, &VAR_8[0], VAR_5, VAR_6);
  if (VAR_10)
   return VAR_10;

  if (VAR_7->num_arl_entries > 2) {
   FUNC_0(VAR_7, 1, &VAR_8[1]);
   VAR_10 = FUNC_2(VAR_4, &VAR_8[1], VAR_5, VAR_6);
   if (VAR_10)
    return VAR_10;

   if (!VAR_8[0].is_valid && !VAR_8[1].is_valid)
    break;
  }

 } while (VAR_9++ < 1024);

 return 0;
}
