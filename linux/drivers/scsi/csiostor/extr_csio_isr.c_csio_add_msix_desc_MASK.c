
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_msix_entries {int desc; } ;
struct csio_hw {int num_sqsets; struct csio_msix_entries* msix_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,char*,int,int,int,...) ;

__attribute__((used)) static void
FUNC_5(struct csio_hw *VAR_1)
{
 int VAR_2;
 struct csio_msix_entries *VAR_3 = &VAR_1->msix_entries[0];
 int VAR_4 = VAR_0;
 int VAR_5 = sizeof(VAR_3->desc) - 1;
 int VAR_6 = VAR_1->num_sqsets + VAR_4;


 FUNC_3(VAR_3->desc, 0, VAR_5 + 1);
 FUNC_4(VAR_3->desc, VAR_5, "csio-%02x:%02x:%x-nondata",
   FUNC_0(VAR_1), FUNC_1(VAR_1), FUNC_2(VAR_1));

 VAR_3++;
 FUNC_3(VAR_3->desc, 0, VAR_5 + 1);
 FUNC_4(VAR_3->desc, VAR_5, "csio-%02x:%02x:%x-fwevt",
   FUNC_0(VAR_1), FUNC_1(VAR_1), FUNC_2(VAR_1));
 VAR_3++;


 for (VAR_2 = VAR_4; VAR_2 < VAR_6; VAR_2++, VAR_3++) {
  FUNC_3(VAR_3->desc, 0, VAR_5 + 1);
  FUNC_4(VAR_3->desc, VAR_5, "csio-%02x:%02x:%x-scsi%d",
    FUNC_0(VAR_1), FUNC_1(VAR_1),
    FUNC_2(VAR_1), VAR_2 - VAR_0);
 }
}
