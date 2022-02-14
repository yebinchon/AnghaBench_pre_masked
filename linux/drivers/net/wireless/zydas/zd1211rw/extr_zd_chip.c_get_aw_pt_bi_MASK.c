
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
typedef void* u32 ;
struct zd_chip {int dummy; } ;
struct aw_pt_bi {void* beacon_interval; void* pre_tbtt; void* atim_wnd_period; } ;


 int FUNC_0 (int const*) ;



 int FUNC_1 (struct aw_pt_bi*,int ,int) ;
 int FUNC_2 (struct zd_chip*,void**,int const*,int ) ;

__attribute__((used)) static int FUNC_3(struct zd_chip *VAR_0, struct aw_pt_bi *VAR_1)
{
 int VAR_2;
 static const zd_addr_t VAR_3[] =
  { 130, 128, 129 };
 u32 VAR_4[3];

 VAR_2 = FUNC_2(VAR_0, VAR_4, (const zd_addr_t *)VAR_3,
           FUNC_0(VAR_3));
 if (VAR_2) {
  FUNC_1(VAR_1, 0, sizeof(*VAR_1));
  return VAR_2;
 }

 VAR_1->atim_wnd_period = VAR_4[0];
 VAR_1->pre_tbtt = VAR_4[1];
 VAR_1->beacon_interval = VAR_4[2];
 return 0;
}
