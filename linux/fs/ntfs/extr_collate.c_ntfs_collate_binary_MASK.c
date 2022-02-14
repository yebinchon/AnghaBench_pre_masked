
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ntfs_volume ;


 int FUNC_0 (void const*,void const*,int ) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(ntfs_volume *VAR_0,
  const void *VAR_1, const int VAR_2,
  const void *VAR_3, const int VAR_4)
{
 int VAR_5;

 FUNC_2("Entering.");
 VAR_5 = FUNC_0(VAR_1, VAR_3, FUNC_1(VAR_2, VAR_4));
 if (!VAR_5 && (VAR_2 != VAR_4)) {
  if (VAR_2 < VAR_4)
   VAR_5 = -1;
  else
   VAR_5 = 1;
 }
 FUNC_2("Done, returning %i", VAR_5);
 return VAR_5;
}
