
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hwsim_new_radio_params {int channels; scalar_t__ regd; scalar_t__ hwname; scalar_t__ use_chanctx; scalar_t__ p2p_device; scalar_t__ reg_strict; scalar_t__ reg_alpha2; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_1 (struct sk_buff*,int ,int,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_9, int VAR_10,
       struct hwsim_new_radio_params *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_3(VAR_9, VAR_1, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_11->channels) {
  VAR_12 = FUNC_3(VAR_9, VAR_0, VAR_11->channels);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_11->reg_alpha2) {
  VAR_12 = FUNC_1(VAR_9, VAR_4, 2,
         VAR_11->reg_alpha2);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_11->regd) {
  int VAR_13;

  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {
   if (VAR_8[VAR_13] != VAR_11->regd)
    continue;

   VAR_12 = FUNC_3(VAR_9, VAR_3, VAR_13);
   if (VAR_12 < 0)
    return VAR_12;
   break;
  }
 }

 if (VAR_11->reg_strict) {
  VAR_12 = FUNC_2(VAR_9, VAR_5);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_11->p2p_device) {
  VAR_12 = FUNC_2(VAR_9, VAR_6);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_11->use_chanctx) {
  VAR_12 = FUNC_2(VAR_9, VAR_7);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_11->hwname) {
  VAR_12 = FUNC_1(VAR_9, VAR_2,
         FUNC_4(VAR_11->hwname), VAR_11->hwname);
  if (VAR_12 < 0)
   return VAR_12;
 }

 return 0;
}
