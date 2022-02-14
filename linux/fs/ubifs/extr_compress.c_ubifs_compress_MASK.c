
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct ubifs_compressor {int name; scalar_t__ comp_mutex; int cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void const*,int,void*,unsigned int*) ;
 int FUNC_1 (void*,void const*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct ubifs_compressor** VAR_3 ;
 int FUNC_4 (struct ubifs_info const*,char*,int,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(const struct ubifs_info *VAR_4, const void *VAR_5,
      int VAR_6, void *VAR_7, int *VAR_8, int *VAR_9)
{
 int VAR_10;
 struct ubifs_compressor *VAR_11 = VAR_3[*VAR_9];

 if (*VAR_9 == VAR_0)
  goto no_compr;


 if (VAR_6 < VAR_2)
  goto no_compr;

 if (VAR_11->comp_mutex)
  FUNC_2(VAR_11->comp_mutex);
 VAR_10 = FUNC_0(VAR_11->cc, VAR_5, VAR_6, VAR_7,
       (unsigned int *)VAR_8);
 if (VAR_11->comp_mutex)
  FUNC_3(VAR_11->comp_mutex);
 if (FUNC_5(VAR_10)) {
  FUNC_4(VAR_4, "cannot compress %d bytes, compressor %s, error %d, leave data uncompressed",
      VAR_6, VAR_11->name, VAR_10);
  goto no_compr;
 }





 if (VAR_6 - *VAR_8 < VAR_1)
  goto no_compr;

 return;

no_compr:
 FUNC_1(VAR_7, VAR_5, VAR_6);
 *VAR_8 = VAR_6;
 *VAR_9 = VAR_0;
}
