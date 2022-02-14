
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct be_wrb_params {int features; } ;
struct be_adapter {scalar_t__ qnq_vid; scalar_t__ pvid; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct be_adapter*,struct sk_buff*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct be_adapter *VAR_3,
          struct sk_buff *VAR_4,
          struct be_wrb_params
          *VAR_5)
{
 bool VAR_6 = 0;
 u16 VAR_7 = 0;

 VAR_4 = FUNC_5(VAR_4, VAR_1);
 if (FUNC_7(!VAR_4))
  return VAR_4;

 if (FUNC_6(VAR_4)) {
  VAR_7 = FUNC_2(VAR_3, VAR_4);
  VAR_6 = 1;
 }

 if (FUNC_4(VAR_3) && VAR_3->pvid) {
  if (!VAR_6) {
   VAR_7 = VAR_3->pvid;
   VAR_6 = 1;
  }



  FUNC_0(VAR_5->features, VAR_2, 1);
 }

 if (VAR_6) {
  VAR_4 = FUNC_8(VAR_4, FUNC_3(VAR_0),
      VAR_7);
  if (FUNC_7(!VAR_4))
   return VAR_4;
  FUNC_1(VAR_4);
 }


 if (VAR_3->qnq_vid) {
  VAR_7 = VAR_3->qnq_vid;
  VAR_4 = FUNC_8(VAR_4, FUNC_3(VAR_0),
      VAR_7);
  if (FUNC_7(!VAR_4))
   return VAR_4;
  FUNC_0(VAR_5->features, VAR_2, 1);
 }

 return VAR_4;
}
