
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_cmd_buffer {scalar_t__ _offset; int _page; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void *FUNC_1(struct iwl_rx_cmd_buffer *VAR_0)
{
 return (void *)((unsigned long)FUNC_0(VAR_0->_page) + VAR_0->_offset);
}
