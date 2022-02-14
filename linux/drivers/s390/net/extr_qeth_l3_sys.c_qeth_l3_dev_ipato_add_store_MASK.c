
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qeth_ipato_entry {int proto; int mask_bits; int addr; } ;
struct qeth_card {int conf_mutex; } ;
typedef int ssize_t ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_ipato_entry*) ;
 struct qeth_ipato_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qeth_card*,struct qeth_ipato_entry*) ;
 int FUNC_6 (char const*,int,int *,int*) ;

__attribute__((used)) static ssize_t FUNC_7(const char *VAR_3, size_t VAR_4,
    struct qeth_card *VAR_5, enum qeth_prot_versions VAR_6)
{
 struct qeth_ipato_entry *VAR_7;
 u8 VAR_8[16];
 int VAR_9;
 int VAR_10 = 0;

 FUNC_3(&VAR_5->conf_mutex);
 VAR_10 = FUNC_6(VAR_3, VAR_6, VAR_8, &VAR_9);
 if (VAR_10)
  goto out;

 VAR_7 = FUNC_1(sizeof(struct qeth_ipato_entry), VAR_1);
 if (!VAR_7) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_7->proto = VAR_6;
 FUNC_2(VAR_7->addr, VAR_8, (VAR_6 == VAR_2)? 4:16);
 VAR_7->mask_bits = VAR_9;

 VAR_10 = FUNC_5(VAR_5, VAR_7);
 if (VAR_10)
  FUNC_0(VAR_7);
out:
 FUNC_4(&VAR_5->conf_mutex);
 return VAR_10 ? VAR_10 : VAR_4;
}
