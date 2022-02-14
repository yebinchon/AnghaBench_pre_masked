
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;







__attribute__((used)) static const char *FUNC_0(enum dma_data_direction VAR_0)
{
 switch (VAR_0) {
 case 131: return "BIDI";
 case 128: return "WRITE";
 case 130: return "READ";
 case 129: return "NONE";
 }

 return "(?)";
}
