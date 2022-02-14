
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct pd_mode_data {scalar_t__ nsvids; void** svids; } ;
struct tcpm_port {struct pd_mode_data mode_data; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct tcpm_port*,char*,scalar_t__,...) ;

__attribute__((used)) static bool FUNC_2(struct tcpm_port *VAR_1, const __le32 *VAR_2,
          int VAR_3)
{
 struct pd_mode_data *VAR_4 = &VAR_1->mode_data;
 int VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
  u32 VAR_6 = FUNC_0(VAR_2[VAR_5]);
  u16 VAR_7;

  VAR_7 = (VAR_6 >> 16) & 0xffff;
  if (!VAR_7)
   return 0;

  if (VAR_4->nsvids >= VAR_0)
   goto abort;

  VAR_4->svids[VAR_4->nsvids++] = VAR_7;
  FUNC_1(VAR_1, "SVID %d: 0x%x", VAR_4->nsvids, VAR_7);

  VAR_7 = VAR_6 & 0xffff;
  if (!VAR_7)
   return 0;

  if (VAR_4->nsvids >= VAR_0)
   goto abort;

  VAR_4->svids[VAR_4->nsvids++] = VAR_7;
  FUNC_1(VAR_1, "SVID %d: 0x%x", VAR_4->nsvids, VAR_7);
 }
 return 1;
abort:
 FUNC_1(VAR_1, "SVID_DISCOVERY_MAX(%d) too low!", VAR_0);
 return 0;
}
