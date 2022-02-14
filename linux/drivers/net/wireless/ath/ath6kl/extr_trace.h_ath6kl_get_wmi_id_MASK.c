
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_cmd_hdr {int cmd_id; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(void *VAR_0, size_t VAR_1)
{
 struct wmi_cmd_hdr *VAR_2 = VAR_0;

 if (VAR_1 < sizeof(*VAR_2))
  return 0;

 return FUNC_0(VAR_2->cmd_id);
}
