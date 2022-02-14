
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ap_qact_ap_info {unsigned int mode; int cat; int member_0; } ;
struct ap_queue_status {scalar_t__ response_code; } ;
typedef int ap_qid_t ;


 int FUNC_0 (int ,char*,int ,int ,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ap_queue_status FUNC_3 (int ,int ,union ap_qact_ap_info*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(ap_qid_t VAR_5, int VAR_6, unsigned int VAR_7)
{
 int VAR_8 = 0;


 if (VAR_6 < VAR_0)
  return 0;

 if (VAR_6 <= VAR_1)
  return VAR_6;





 if (FUNC_4()) {
  struct ap_queue_status VAR_9;
  union ap_qact_ap_info VAR_10 = {0};

  VAR_10.mode = (VAR_7 >> 26) & 0x07;
  VAR_10.cat = VAR_1;
  VAR_9 = FUNC_3(VAR_5, 0, &VAR_10);
  if (VAR_9.response_code == VAR_2
      && VAR_10.cat >= VAR_0
      && VAR_10.cat <= VAR_1)
   VAR_8 = VAR_10.cat;
 }
 if (!VAR_8)
  FUNC_0(VAR_4, "queue=%02x.%04x unable to map type %d\n",
         FUNC_1(VAR_5), FUNC_2(VAR_5), VAR_6);
 else if (VAR_8 != VAR_6)
  FUNC_0(VAR_3, "queue=%02x.%04x map type %d to %d\n",
         FUNC_1(VAR_5), FUNC_2(VAR_5), VAR_6, VAR_8);
 return VAR_8;
}
