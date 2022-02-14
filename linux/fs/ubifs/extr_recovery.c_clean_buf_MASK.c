
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ leb_size; int min_io_size; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (void*,int,scalar_t__) ;
 int FUNC_3 (struct ubifs_info const*,int) ;
 int FUNC_4 (struct ubifs_info const*,void*,int) ;

__attribute__((used)) static void FUNC_5(const struct ubifs_info *VAR_0, void **VAR_1, int VAR_2,
        int *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_1("cleaning corruption at %d:%d", VAR_2, *VAR_3);

 FUNC_3(VAR_0, !(*VAR_3 & 7));
 VAR_5 = FUNC_0(*VAR_3, VAR_0->min_io_size);
 VAR_6 = VAR_5 - *VAR_3;
 FUNC_4(VAR_0, *VAR_1, VAR_6);
 *VAR_3 += VAR_6;
 *VAR_1 += VAR_6;
 *VAR_4 -= VAR_6;
 FUNC_2(*VAR_1, 0xff, VAR_0->leb_size - VAR_5);
}
