
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_tid_crypto_rx_single {int pn; scalar_t__ key_set; } ;
struct wil_tid_crypto_rx {struct wil_tid_crypto_rx_single* key_id; } ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, int VAR_2,
       struct wil_tid_crypto_rx *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  struct wil_tid_crypto_rx_single *VAR_5 = &VAR_3->key_id[VAR_4];

  if (VAR_5->key_set)
   goto has_keys;
 }
 return;

has_keys:
 if (VAR_2 < VAR_0)
  FUNC_0(VAR_1, "  [%2d] PN", VAR_2);
 else
  FUNC_1(VAR_1, "  [GR] PN");

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  struct wil_tid_crypto_rx_single *VAR_6 = &VAR_3->key_id[VAR_4];

  FUNC_0(VAR_1, " [%i%s]%6phN", VAR_4, VAR_6->key_set ? "+" : "-",
      VAR_6->pn);
 }
 FUNC_1(VAR_1, "\n");
}
