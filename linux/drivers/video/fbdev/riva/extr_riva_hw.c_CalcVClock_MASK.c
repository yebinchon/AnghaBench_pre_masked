
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CrystalFreqKHz; scalar_t__ Architecture; unsigned int MaxVClockFreqKHz; } ;
typedef TYPE_1__ RIVA_HW_INST ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0
(
    int VAR_1,
    int *VAR_2,
    int *VAR_3,
    int *VAR_4,
    int *VAR_5,
    RIVA_HW_INST *VAR_6
)
{
    unsigned VAR_7, VAR_8, VAR_9;
    unsigned VAR_10, VAR_11;
    unsigned VAR_12, VAR_13;
    unsigned VAR_14, VAR_15, VAR_16;

    VAR_11 = 0xFFFFFFFF;

    VAR_12 = (unsigned)VAR_1;

    if (VAR_6->CrystalFreqKHz == 13500)
    {
        VAR_7 = 7;
        VAR_8 = 13 - (VAR_6->Architecture == VAR_0);
    }
    else
    {
        VAR_7 = 8;
        VAR_8 = 14 - (VAR_6->Architecture == VAR_0);
    }

    VAR_9 = 4 - (VAR_6->Architecture == VAR_0);
    for (VAR_16 = 0; VAR_16 <= VAR_9; VAR_16 ++)
    {
        VAR_13 = VAR_12 << VAR_16;
        if ((VAR_13 >= 128000) && (VAR_13 <= VAR_6->MaxVClockFreqKHz))
        {
            for (VAR_14 = VAR_7; VAR_14 <= VAR_8; VAR_14++)
            {
                VAR_15 = (VAR_12 << VAR_16) * VAR_14 / VAR_6->CrystalFreqKHz;
                if(VAR_15 <= 255) {
                VAR_13 = (VAR_6->CrystalFreqKHz * VAR_15 / VAR_14) >> VAR_16;
                if (VAR_13 > VAR_12)
                    VAR_10 = VAR_13 - VAR_12;
                else
                    VAR_10 = VAR_12 - VAR_13;
                if (VAR_10 < VAR_11)
                {
                    *VAR_3 = VAR_14;
                    *VAR_4 = VAR_15;
                    *VAR_5 = VAR_16;
                    *VAR_2 = VAR_13;
                    VAR_11 = VAR_10;
                }
            }
        }
    }
    }


    return (VAR_11 != 0xFFFFFFFF);
}
