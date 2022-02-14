
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct TYPE_6__ {int info; int info2; int cache_feat; TYPE_1__* hdr; int hanum; } ;
typedef TYPE_2__ gdth_ha_str ;
struct TYPE_5__ {int size; size_t devtype; void* rw_attribs; void* cluster_type; void* secs; void* heads; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 int FUNC_2 (int,int*,int*,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ,size_t,int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(gdth_ha_str *VAR_11, u16 VAR_12)
{
    u32 VAR_13;
    int VAR_14, VAR_15;

    FUNC_0(("gdth_analyse_hdrive() hanum %d drive %d\n", VAR_11->hanum, VAR_12));
    if (VAR_12 >= VAR_7)
        return 0;

    if (!FUNC_3(VAR_11, VAR_0, VAR_4, VAR_12, 0, 0))
        return 0;
    VAR_11->hdr[VAR_12].present = VAR_9;
    VAR_11->hdr[VAR_12].size = VAR_11->info;


    VAR_11->hdr[VAR_12].size &= ~VAR_8;
    if (VAR_11->info2 == 0) {
        FUNC_2(VAR_11->hdr[VAR_12].size,&VAR_13,&VAR_14,&VAR_15);
    } else {
        VAR_14 = VAR_11->info2 & 0xff;
        VAR_15 = (VAR_11->info2 >> 8) & 0xff;
        VAR_13 = (u32)VAR_11->hdr[VAR_12].size / VAR_14 / VAR_15;
    }
    VAR_11->hdr[VAR_12].heads = (u8)VAR_14;
    VAR_11->hdr[VAR_12].secs = (u8)VAR_15;

    VAR_11->hdr[VAR_12].size = VAR_13 * VAR_14 * VAR_15;

    if (VAR_11->cache_feat & VAR_1) {
        if (FUNC_3(VAR_11, VAR_0, VAR_6, VAR_12, 0, 0)
            && VAR_11->info2 != 0) {
            VAR_11->hdr[VAR_12].size = ((u64)VAR_11->info2 << 32) | VAR_11->info;
        }
    }
    FUNC_1(("gdth_search_dr() cdr. %d size %d hds %d scs %d\n",
            VAR_12,VAR_11->hdr[VAR_12].size,VAR_14,VAR_15));


    if (FUNC_3(VAR_11, VAR_0, VAR_3, VAR_12, 0, 0)) {
        FUNC_1(("gdth_search_dr() cache drive %d devtype %d\n",
                VAR_12,VAR_11->info));
        VAR_11->hdr[VAR_12].devtype = (u16)VAR_11->info;
    }


    if (FUNC_3(VAR_11, VAR_0, VAR_2, VAR_12, 0, 0)) {
        FUNC_1(("gdth_search_dr() cache drive %d cluster info %d\n",
                VAR_12,VAR_11->info));
        if (!VAR_10)
            VAR_11->hdr[VAR_12].cluster_type = (u8)VAR_11->info;
    }


    if (FUNC_3(VAR_11, VAR_0, VAR_5, VAR_12, 0, 0)) {
        FUNC_1(("gdth_search_dr() cache drive %d r/w attrib. %d\n",
                VAR_12,VAR_11->info));
        VAR_11->hdr[VAR_12].rw_attribs = (u8)VAR_11->info;
    }

    return 1;
}
