
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct wmi_tlv {int len; int tag; } ;
struct ath10k {int dummy; } ;
struct TYPE_3__ {size_t min_len; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,size_t,int,size_t,...) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct ath10k *VAR_3, const void *VAR_4, size_t VAR_5,
      int (*VAR_6)(struct ath10k *VAR_7, u16 VAR_8, u16 VAR_9,
    const void *VAR_10, void *VAR_11),
      void *VAR_12)
{
 const void *VAR_13 = VAR_4;
 const struct wmi_tlv *VAR_14;
 u16 VAR_15, VAR_16;
 int VAR_17;

 while (VAR_5 > 0) {
  if (VAR_5 < sizeof(*VAR_14)) {
   FUNC_2(VAR_3, VAR_0,
       "wmi tlv parse failure at byte %zd (%zu bytes left, %zu expected)\n",
       VAR_4 - VAR_13, VAR_5, sizeof(*VAR_14));
   return -VAR_1;
  }

  VAR_14 = VAR_4;
  VAR_15 = FUNC_1(VAR_14->tag);
  VAR_16 = FUNC_1(VAR_14->len);
  VAR_4 += sizeof(*VAR_14);
  VAR_5 -= sizeof(*VAR_14);

  if (VAR_16 > VAR_5) {
   FUNC_2(VAR_3, VAR_0,
       "wmi tlv parse failure of tag %hhu at byte %zd (%zu bytes left, %hhu expected)\n",
       VAR_15, VAR_4 - VAR_13, VAR_5, VAR_16);
   return -VAR_1;
  }

  if (VAR_15 < FUNC_0(VAR_2) &&
      VAR_2[VAR_15].min_len &&
      VAR_2[VAR_15].min_len > VAR_16) {
   FUNC_2(VAR_3, VAR_0,
       "wmi tlv parse failure of tag %hhu at byte %zd (%hhu bytes is less than min length %zu)\n",
       VAR_15, VAR_4 - VAR_13, VAR_16,
       VAR_2[VAR_15].min_len);
   return -VAR_1;
  }

  VAR_17 = VAR_6(VAR_3, VAR_15, VAR_16, VAR_4, VAR_12);
  if (VAR_17)
   return VAR_17;

  VAR_4 += VAR_16;
  VAR_5 -= VAR_16;
 }

 return 0;
}
