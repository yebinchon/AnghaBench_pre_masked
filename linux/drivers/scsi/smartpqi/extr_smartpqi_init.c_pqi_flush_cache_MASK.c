
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int dummy; } ;
struct bmic_flush_cache {int shutdown_event; } ;
typedef enum bmic_flush_cache_shutdown_event { ____Placeholder_bmic_flush_cache_shutdown_event } bmic_flush_cache_shutdown_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bmic_flush_cache*) ;
 struct bmic_flush_cache* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*,int ,struct bmic_flush_cache*,int) ;

__attribute__((used)) static int FUNC_4(struct pqi_ctrl_info *VAR_4,
 enum bmic_flush_cache_shutdown_event VAR_5)
{
 int VAR_6;
 struct bmic_flush_cache *VAR_7;





 if (FUNC_2(VAR_4))
  return -VAR_1;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->shutdown_event = VAR_5;

 VAR_6 = FUNC_3(VAR_4, VAR_3, VAR_7,
  sizeof(*VAR_7));

 FUNC_0(VAR_7);

 return VAR_6;
}
