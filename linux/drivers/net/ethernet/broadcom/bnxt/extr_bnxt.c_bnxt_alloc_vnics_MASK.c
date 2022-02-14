
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_vnic_info {int dummy; } ;
struct bnxt {int flags; int nr_vnics; int vnic_info; scalar_t__ rx_nr_rings; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_4)
{
 int VAR_5 = 1;






 if (FUNC_0(VAR_4))
  VAR_5++;

 VAR_4->vnic_info = FUNC_1(VAR_5, sizeof(struct bnxt_vnic_info),
    VAR_3);
 if (!VAR_4->vnic_info)
  return -VAR_2;

 VAR_4->nr_vnics = VAR_5;
 return 0;
}
