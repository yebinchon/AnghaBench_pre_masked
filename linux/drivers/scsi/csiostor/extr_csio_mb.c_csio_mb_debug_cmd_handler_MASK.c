
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fw_debug_cmd {int dummy; } ;
struct csio_hw {int pfn; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct csio_hw*,int *) ;
 int FUNC_4 (struct csio_hw*,scalar_t__) ;
 int FUNC_5 (struct csio_hw*,scalar_t__) ;
 int FUNC_6 (struct csio_hw*,int,scalar_t__) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct csio_hw *VAR_6)
{
 int VAR_7;
 __be64 VAR_8[VAR_3];
 uint32_t VAR_9 = FUNC_1(VAR_6->pfn, VAR_0);
 uint32_t VAR_10 = FUNC_1(VAR_6->pfn, VAR_1);
 int VAR_11 = sizeof(struct fw_debug_cmd);


 for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7 += 8)
  VAR_8[VAR_7 / 8] = FUNC_2(FUNC_5(VAR_6, VAR_10 + VAR_7));

 FUNC_3(VAR_6, VAR_8);


 FUNC_6(VAR_6, VAR_5 | VAR_4 |
        FUNC_0(VAR_2), VAR_9);

 FUNC_4(VAR_6, VAR_9);
 FUNC_7();
}
