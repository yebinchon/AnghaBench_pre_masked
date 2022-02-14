
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_ppod_data {unsigned long caller_data; int npods; int color; } ;
struct cxgbi_ppm {struct cxgbi_ppod_data* ppod_data; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cxgbi_ppm *VAR_1, int VAR_2, int VAR_3,
        unsigned long VAR_4)
{
 struct cxgbi_ppod_data *VAR_5 = VAR_1->ppod_data + VAR_2;

 VAR_5->caller_data = VAR_4;
 VAR_5->npods = VAR_3;

 if (VAR_5->color == ((1 << VAR_0) - 1))
  VAR_5->color = 0;
 else
  VAR_5->color++;
}
