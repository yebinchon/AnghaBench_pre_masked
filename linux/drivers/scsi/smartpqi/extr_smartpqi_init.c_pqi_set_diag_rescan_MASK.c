
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int dummy; } ;
struct bmic_diag_options {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bmic_diag_options*) ;
 struct bmic_diag_options* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pqi_ctrl_info*,int ,struct bmic_diag_options*,int) ;

__attribute__((used)) static int FUNC_4(struct pqi_ctrl_info *VAR_5)
{
 int VAR_6;
 struct bmic_diag_options *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_6 = FUNC_3(VAR_5, VAR_0,
     VAR_7, sizeof(*VAR_7));
 if (VAR_6)
  goto out;

 VAR_7->options |= FUNC_0(VAR_4);

 VAR_6 = FUNC_3(VAR_5, VAR_1,
     VAR_7, sizeof(*VAR_7));
out:
 FUNC_1(VAR_7);

 return VAR_6;
}
