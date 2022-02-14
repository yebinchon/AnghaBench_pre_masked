
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
struct mvumi_hs_page4 {void* ib_depth; void* ob_depth; int ob_entry_size; int ib_entry_size; void* ob_baseaddr_h; void* ob_baseaddr_l; void* ib_baseaddr_h; void* ib_baseaddr_l; } ;
struct mvumi_hs_page3 {int dummy; } ;
struct TYPE_4__ {int ver_build; int ver_oem; int ver_minor; int ver_major; } ;
struct mvumi_hs_page2 {int host_type; int host_cap; int seconds_since1970; int intr_vector; int intr_level; int slot_number; int system_io_bus; TYPE_1__ host_ver; } ;
struct mvumi_hs_header {int page_code; int frame_length; void* checksum; int frame_content; } ;
struct mvumi_hba {int hba_capability; TYPE_2__* pdev; int list_num_io; int ob_max_size_setting; int ib_max_size_setting; int ob_list_phys; int ib_list_phys; } ;
struct TYPE_6__ {int tz_minuteswest; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 void* FUNC_1 (unsigned long*,int ) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 void* FUNC_5 (struct mvumi_hs_header*,int) ;
 TYPE_3__ VAR_7 ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mvumi_hba *VAR_8,
    struct mvumi_hs_header *VAR_9)
{
 struct mvumi_hs_page2 *VAR_10;
 struct mvumi_hs_page4 *VAR_11;
 struct mvumi_hs_page3 *VAR_12;
 u64 VAR_13;
 u64 VAR_14;

 switch (VAR_9->page_code) {
 case 128:
  VAR_10 = (struct mvumi_hs_page2 *) VAR_9;
  VAR_9->frame_length = sizeof(*VAR_10) - 4;
  FUNC_4(VAR_9->frame_content, 0, VAR_9->frame_length);
  VAR_10->host_type = 3;
  if (VAR_8->hba_capability & VAR_2)
   VAR_10->host_cap = 0x08;
  VAR_10->host_ver.ver_major = VAR_4;
  VAR_10->host_ver.ver_minor = VAR_5;
  VAR_10->host_ver.ver_oem = VAR_6;
  VAR_10->host_ver.ver_build = VAR_3;
  VAR_10->system_io_bus = 0;
  VAR_10->slot_number = 0;
  VAR_10->intr_level = 0;
  VAR_10->intr_vector = 0;
  VAR_13 = FUNC_2();
  VAR_14 = (VAR_13 - (VAR_7.tz_minuteswest * 60));
  VAR_10->seconds_since1970 = VAR_14;
  VAR_9->checksum = FUNC_5(VAR_9,
      VAR_9->frame_length);
  break;

 case 129:
  VAR_12 = (struct mvumi_hs_page3 *) VAR_9;
  VAR_9->frame_length = sizeof(*VAR_12) - 4;
  FUNC_4(VAR_9->frame_content, 0, VAR_9->frame_length);
  VAR_9->checksum = FUNC_5(VAR_9,
      VAR_9->frame_length);
  break;

 case 130:
  VAR_11 = (struct mvumi_hs_page4 *) VAR_9;
  VAR_9->frame_length = sizeof(*VAR_11) - 4;
  FUNC_4(VAR_9->frame_content, 0, VAR_9->frame_length);
  VAR_11->ib_baseaddr_l = FUNC_3(VAR_8->ib_list_phys);
  VAR_11->ib_baseaddr_h = FUNC_6(VAR_8->ib_list_phys);

  VAR_11->ob_baseaddr_l = FUNC_3(VAR_8->ob_list_phys);
  VAR_11->ob_baseaddr_h = FUNC_6(VAR_8->ob_list_phys);
  VAR_11->ib_entry_size = VAR_8->ib_max_size_setting;
  VAR_11->ob_entry_size = VAR_8->ob_max_size_setting;
  if (VAR_8->hba_capability
   & VAR_1) {
   VAR_11->ob_depth = FUNC_1((unsigned long *)
           &VAR_8->list_num_io,
           VAR_0);
   VAR_11->ib_depth = FUNC_1((unsigned long *)
           &VAR_8->list_num_io,
           VAR_0);
  } else {
   VAR_11->ob_depth = (u8) VAR_8->list_num_io;
   VAR_11->ib_depth = (u8) VAR_8->list_num_io;
  }
  VAR_9->checksum = FUNC_5(VAR_9,
      VAR_9->frame_length);
  break;

 default:
  FUNC_0(&VAR_8->pdev->dev, "cannot build page, code[0x%x]\n",
   VAR_9->page_code);
  break;
 }
}
