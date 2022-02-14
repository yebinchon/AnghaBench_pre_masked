
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_frame_header {int fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_hdr {int ct_cmd; } ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_2 (struct fc_frame*) ;
 struct fc_ct_hdr* FUNC_3 (struct fc_frame*,int) ;
 int FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (int ) ;

const char *FUNC_6(struct fc_frame *VAR_0)
{
 const char *VAR_1;
 struct fc_frame_header *VAR_2;
 struct fc_ct_hdr *VAR_3;

 if (FUNC_0(VAR_0)) {
  switch (-FUNC_1(VAR_0)) {
  case 130:
   VAR_1 = "response no error";
   break;
  case 133:
   VAR_1 = "response timeout";
   break;
  case 134:
   VAR_1 = "response closed";
   break;
  default:
   VAR_1 = "response unknown error";
   break;
  }
 } else {
  VAR_2 = FUNC_2(VAR_0);
  switch (VAR_2->fh_type) {
  case 128:
   switch (FUNC_4(VAR_0)) {
   case 136:
    VAR_1 = "accept";
    break;
   case 135:
    VAR_1 = "reject";
    break;
   default:
    VAR_1 = "response unknown ELS";
    break;
   }
   break;
  case 129:
   VAR_3 = FUNC_3(VAR_0, sizeof(*VAR_3));
   if (VAR_3) {
    switch (FUNC_5(VAR_3->ct_cmd)) {
    case 132:
     VAR_1 = "CT accept";
     break;
    case 131:
     VAR_1 = "CT reject";
     break;
    default:
     VAR_1 = "response unknown CT";
     break;
    }
   } else {
    VAR_1 = "short CT response";
   }
   break;
  default:
   VAR_1 = "response not ELS or CT";
   break;
  }
 }
 return VAR_1;
}
