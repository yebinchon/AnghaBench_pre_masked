
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct iavf_adminq_ring {scalar_t__ next_to_clean; scalar_t__ count; int head; } ;
struct TYPE_2__ {struct iavf_adminq_ring asq; } ;
struct iavf_hw {TYPE_1__ aq; } ;
struct iavf_asq_cmd_details {scalar_t__ callback; } ;
struct iavf_aq_desc {int dummy; } ;
typedef int (* IAVF_ADMINQ_CALLBACK ) (struct iavf_hw*,struct iavf_aq_desc*) ;


 struct iavf_aq_desc* FUNC_0 (struct iavf_adminq_ring,scalar_t__) ;
 struct iavf_asq_cmd_details* FUNC_1 (struct iavf_adminq_ring,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct iavf_adminq_ring*) ;
 int FUNC_3 (struct iavf_hw*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (void*,int ,int) ;
 scalar_t__ FUNC_5 (struct iavf_hw*,int ) ;

__attribute__((used)) static u16 FUNC_6(struct iavf_hw *VAR_1)
{
 struct iavf_adminq_ring *VAR_2 = &VAR_1->aq.asq;
 struct iavf_asq_cmd_details *VAR_3;
 u16 VAR_4 = VAR_2->next_to_clean;
 struct iavf_aq_desc VAR_5;
 struct iavf_aq_desc *VAR_6;

 VAR_6 = FUNC_0(*VAR_2, VAR_4);
 VAR_3 = FUNC_1(*VAR_2, VAR_4);
 while (FUNC_5(VAR_1, VAR_1->aq.asq.head) != VAR_4) {
  FUNC_3(VAR_1, VAR_0,
      "ntc %d head %d.\n", VAR_4, FUNC_5(VAR_1, VAR_1->aq.asq.head));

  if (VAR_3->callback) {
   IAVF_ADMINQ_CALLBACK VAR_7 =
     (IAVF_ADMINQ_CALLBACK)VAR_3->callback;
   VAR_5 = *VAR_6;
   VAR_7(VAR_1, &VAR_5);
  }
  FUNC_4((void *)VAR_6, 0, sizeof(struct iavf_aq_desc));
  FUNC_4((void *)VAR_3, 0,
         sizeof(struct iavf_asq_cmd_details));
  VAR_4++;
  if (VAR_4 == VAR_2->count)
   VAR_4 = 0;
  VAR_6 = FUNC_0(*VAR_2, VAR_4);
  VAR_3 = FUNC_1(*VAR_2, VAR_4);
 }

 VAR_2->next_to_clean = VAR_4;

 return FUNC_2(VAR_2);
}
