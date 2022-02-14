
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {int dummy; } ;
struct ofdpa_group_tbl_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ofdpa_port*,int,struct ofdpa_group_tbl_entry*) ;
 int FUNC_1 (struct ofdpa_port*,int,struct ofdpa_group_tbl_entry*) ;

__attribute__((used)) static int FUNC_2(struct ofdpa_port *VAR_1, int VAR_2,
         struct ofdpa_group_tbl_entry *VAR_3)
{
 if (VAR_2 & VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3);
}
