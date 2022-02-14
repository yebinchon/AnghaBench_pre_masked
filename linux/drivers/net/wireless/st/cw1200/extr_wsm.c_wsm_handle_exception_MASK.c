
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct wsm_buf {char* begin; char* data; char* end; } ;
struct cw1200_common {TYPE_1__* hw; } ;
typedef int fname ;
struct TYPE_2__ {int wiphy; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct wsm_buf*,char*,int) ;
 int FUNC_2 (struct wsm_buf*) ;
 int FUNC_3 (char*,int ,char*,size_t) ;
 int FUNC_4 (int ,char*,...) ;

int FUNC_5(struct cw1200_common *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 struct wsm_buf VAR_5;
 u32 VAR_6;
 u32 VAR_7[18];
 char VAR_8[48];
 unsigned int VAR_9;

 static const char * const VAR_10[] = {
  "undefined instruction",
  "prefetch abort",
  "data abort",
  "unknown error",
 };

 VAR_5.begin = VAR_5.data = VAR_3;
 VAR_5.end = &VAR_5.begin[VAR_4];

 VAR_6 = FUNC_2(&VAR_5);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7); ++VAR_9)
  VAR_7[VAR_9] = FUNC_2(&VAR_5);
 FUNC_1(&VAR_5, VAR_8, sizeof(VAR_8));

 if (VAR_6 < 4)
  FUNC_4(VAR_2->hw->wiphy,
     "Firmware exception: %s.\n",
     VAR_10[VAR_6]);
 else
  FUNC_4(VAR_2->hw->wiphy,
     "Firmware assert at %.*s, line %d\n",
     (int) sizeof(VAR_8), VAR_8, VAR_7[1]);

 for (VAR_9 = 0; VAR_9 < 12; VAR_9 += 4)
  FUNC_4(VAR_2->hw->wiphy,
     "R%d: 0x%.8X, R%d: 0x%.8X, R%d: 0x%.8X, R%d: 0x%.8X,\n",
     VAR_9 + 0, VAR_7[VAR_9 + 0], VAR_9 + 1, VAR_7[VAR_9 + 1],
     VAR_9 + 2, VAR_7[VAR_9 + 2], VAR_9 + 3, VAR_7[VAR_9 + 3]);
 FUNC_4(VAR_2->hw->wiphy,
    "R12: 0x%.8X, SP: 0x%.8X, LR: 0x%.8X, PC: 0x%.8X,\n",
    VAR_7[VAR_9 + 0], VAR_7[VAR_9 + 1], VAR_7[VAR_9 + 2], VAR_7[VAR_9 + 3]);
 VAR_9 += 4;
 FUNC_4(VAR_2->hw->wiphy,
    "CPSR: 0x%.8X, SPSR: 0x%.8X\n",
    VAR_7[VAR_9 + 0], VAR_7[VAR_9 + 1]);

 FUNC_3("R1: ", VAR_0,
        VAR_8, sizeof(VAR_8));
 return 0;

underflow:
 FUNC_4(VAR_2->hw->wiphy, "Firmware exception.\n");
 FUNC_3("Exception: ", VAR_0,
        VAR_3, VAR_4);
 return -VAR_1;
}
